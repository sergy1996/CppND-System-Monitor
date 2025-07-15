#include "processor.h"

#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  long total_old, total_new, active_new, idle_old, idle_new;
  total_new = LinuxParser::Jiffies();
  active_new = LinuxParser::ActiveJiffies(); 
  idle_new = LinuxParser::IdleJiffies();

  total_old = PrevTotal();
  idle_old = PrevIdle();

  Update(idle_new, active_new, total_new);

  float totalDelta = float(total_new) - float(total_old);
  float idleDetla = float(idle_new) - float(idle_old);

  float utilization = (totalDelta - idleDetla) / totalDelta;
  return utilization;
}

void Processor::Update(long idle, long active, long total) {
  m_idle = idle;
  m_active = active;
  m_total = total;
}

long Processor::PrevTotal() { return m_total; }
long Processor::PrevActive() { return m_active; }
long Processor::PrevIdle() { return m_idle; }
