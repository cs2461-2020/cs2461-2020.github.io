---
layout: home

---
<div class="wrapper" markdown="0"><div class="footer-col-wrapper">
<div class="footer-col two-col-1">
    <ul class="contact-list">
        <li><b>Prof. Bhagi Narahari</b></li>
        <li><a href="mailto:narahari@gwu.edu">narahari@gwu.edu</a></li>
        <li>Office Hours: </li>
        <li><b> Sarah Morin  </b> (UTA) </li>
        <li> sarahmorin@gwu.edu </li>
    </ul>
</div>
<div class="footer-col two-col-2">
    <ul class="contact-list">
        <li><b>William (Billy) Miller </b> (TA)</li>
        <li><a href="mailto:bmiller8@gwmail.gwu.edu">bmiller8@@gwmail.gwu.edu</a> </li>
        <li>Office Hours: <a href="https://piazza.com/gwu/">Check Piazza</a></li>
        <li><b> Linnea Diersheide </b> (UTA) </li>
        <li> email </li>
      </ul>
</div>
</div>
</div>


> This is an introductory course on Computer organization and computer systems. The  course will expose the student to the different layers in a computer system and examine the working of a computer system at these different levels. It will expose the student to the low level details of how machines are assembled and the tools to program them -- it will expose what really happens when your programs are run, thereby providing you with the intellectual tools needed to solve problems when things go wrong. In addition to the theoretical concepts, the course through the lab section will provide an exposure to systems skills using various tools and focusing on issues such as performance and correctness. The course will take a bottom-up approach: it will start with the basic components of a computer system, machine representation of data, digital logic circuits, instruction sets and assembly programming, and moves to a discussion of how C programs are translated to the machine level. The course also introduces systems programming concepts such as memory management, file systems, safe programming, system stack, debugging and performance tuning of programs. The lecture, and some lab sessions, will consist of in-class activities and students will be required to work in groups.




## Announcements ##
  - <b>This website is under construction - all content subject to change!<b>

## Class Resources ##
  - [Piazza]()
  - [Slack]() - [Join here]()
  - [LC3 Download Instructions](https://github.com/chiragsakhuja/lc3tools/blob/master/docs/DownloadingAndInstalling.pdf)
  - [LC3 Download Page](https://github.com/chiragsakhuja/lc3tools/releases)
  - [Git Instructions](tutorials/git_tutorial.md) & [Video Demo](https://youtu.be/RvEgfSeEuB0)
  - [Logism Instructions](tutorials/logism_tutorial.md) & [Video Demo](https://youtu.be/rQOv0h-4TEo) 
  - [Tinkercad Instructions](tutorials/tinkercad_tutorial.md) & Video Demo [video]
  - [Visual Studio Code Instructions](tutorials/vscode_tutorial.md) & [Video Demo](https://youtu.be/WhppZrMvoBU)

## Schedule  ##

<div style="font-size:90%">

| Introduction  | Materials 
| :--- |:---  |
| Week 0  |  [Course Logistics](lectures/logistics.pdf) [Video]<br> [Course Intro] (lectures/syllabus.pdf) [Video]|  
| Week 1- Data Representation  | [Data Representation1](lectures/datarep1.pdf) [Video] <br> [Operations](lectures/datarep2.pdf) [Video]| 
| Lab Week 1  | [Introduction to Circuits](lectures/ohmslaw.pdf) [Video] <br> [Getting Stated with TinkerCad](lectures/lab1.pdf) [Video]| 

| Digital Logic  | Materials 
| :--- |:---  |
| Introduction (Week 2)  |  [Devices](lectures/transistor-gates.pdf)<br> [Boolean Functions](lectures/logic1.pdf) [Video]|  
| Combinational Logic Circuits <br> (Weeks 2-4)  | [Karnaugh maps and Circuit Design](lectures/Kmaps.pdf) <br> [Combinational Logic Devices](lectures/logic2.pdf) [Video]<br> [Circuits with Feedback-FlipFlops](lectures/logic3.pdf) [Video}| 
| Sequential Logic (Week 4-5)| [Sequential Logic](seqlogic.pdf) [Video] <br> [Finite State Machine Design](lectures/fsm.pdf) [Video]|
| Week 2 Lab | Using DIP Switches and a Simple Logic Circuit |
| Week 3 Lab | Design of Combinational Logic circuit using Integrated Circuits |
| Week 4 Lab | Design of Logic Devices - project 1|
| Week 5 Lab | Data Representation and Bit manipulation in C - Project 2 |

| ISA and Assembly Programming  | Materials 
| :--- |:---  |
| von Neuman Model (Week 6) <br> LC3 Instruction Set Architecture(ISA)  |  [von Neuman Architecture and Instruction Execution](lectures/arch1.pdf) [Video]<br> [LC3 Instruction Set] (lectures/LC3-ISA.pdf) [Video]|  
| Processor Datapath (week 7) | [Datapath Design](lectures/Datapath.pdf) [Video] <br> [Example in Cedar Logic](lectures/datapath.cdl) [Video]| 
| Assembly Programming <br> <b>Exam 1 </b> | [Programming in Assembly](lectures/assembly1.pdf) [Video] <br> <b> Exam Covers material upto LC3 ISA </b> |
|Assembly Programming <br> Weeks 8-9 | [I/O and Traps in LC3](lectures/assembly2.pdf) [Video] <br> [Subroutines/Functions in Assembly](lectures/assembly3.pdf) [Video] <br> [Stacks and Interrupts](lectures/stack.pdf) [Video]|
| Labs Weeks 6-9 <br> Lab Week 7 | [Getting Started with LC3 simulator](lectures/lc3-simulator.pdf) [Video] <br> [Writing an Assembly Program](lectures/LC3-asm1.pdf) [Video]<br> [Assembly program using Subroutines](lectures/LC3-asm2.pdf)| 

| Implementing C programs on Machine ISA   | Materials 
| :--- |:---  |
| Running high level programs (Week 9) <br> Quick Review of C (Week 9)  |  [Translation Process and Role of Compiler](lectures/C-Lecture1.pdf) [Video] <br> [C Review](lectures/C-lecture1.pdf) [Video]|  
| Running C programs on LC3  (weeks 10-12)<br> Run-time Stack <br> Activation Records and Function Calls <br> Arrays and Pointers <br> Dynamic Memory (Heap) | [Run-time Stack](lectures/runtimestack.pdf) [Video] <br> [Function Calls](lectures/functions.pdf)<br> [Arrays and Pointers](lectures/pointers.pdf) [Video] <br> [Dynamic Memory-Malloc](lectures/dynamic.pdf) [Video]| 

| Labs Weeks 10-12  <br> I/O and Files in C| [Working with C](lectures/C-Labs.pdf)<br> [Tools: GDB, Valgrind](lectures/gdb.pdf) [Video] <br> [I/O and Files in C](lectures/Files-IO.pdf) [Video]| 
| <b> Exam 2 </b> | All material upto Dynamic Memory in C |

| Program Performance and Computer Architecture  | Materials 
| :--- |:---  |
| Performance Optimization (Weeks 12-14) <br> Memory Hierarchy <br> Code Optimization   |  [Measuring System Performance](lectures/performance1.pdf) [Video]<br> [Memory Hierarchy] (lectures/memory.pdf) [Video] <br> [Code Optimization Techniques](lectures/optimization.pdf)|  
| Labs Weeks 12-14  | Project 5,6 discussions|
| Course Summary  | [Course Summary: Real Architectures](lectures/summary.pdf) [Video] | 
 

</div>
