#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"

using std::string;
using std::to_string;
using std::vector;

// TODO: Return this process's ID
int Process::Pid() { return m_pid; }

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() { return m_utilization; }

// TODO: Return the command that generated this process
string Process::Command() { return m_command; }

// TODO: Return this process's memory utilization
string Process::Ram() { return std::to_string(m_ram); }

// TODO: Return the user (name) that generated this process
string Process::User() {  return m_user; }

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() { return m_uptime; }

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a) const {  return CpuUtilization() < a.CpuUtilization(); }