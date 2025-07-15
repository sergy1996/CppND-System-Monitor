#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:

    void Update(long idle, long active, long total);
    long PrevTotal();
    long PrevActive();
    long PrevIdle();
    
    long m_idle{0};
    long m_active{0};
    long m_total{0};

};

#endif