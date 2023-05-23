\textbf<>{} controls when to bold text
\only<>{} controls when to reveal text, occupies NO space otherwise
\textit<>{} controls when to italicize text
\uncover<>{} controls when to reveal text, DOES occupy space otherwise
\color<>[]{} controls when to change color of text
\alt<>{}{} reveals first argument when specification is true, otherwise reveals second argument
\alert<>{} controls when to highlight text (default red)
\item<> controls when an item is shown

```
\begin{enumerate}[A]
\item<2-5> James Madison
\item<3-5> Harry Truman
\item<4-> \color<6>[rgb]{0,0.6,0}Abraham Lincoln
\item<5-5> Calvin Coolidge
\end{enumerate}
\uncover<1-5>{Hints:}\\
\uncover<2-5>{James Madison ate broccoli.}\\
\uncover<3-5>{Harry Truman drank milk.}\\
\uncover<4-5>{Abe Lincoln raised bees.}\\
\uncover<5-5>{And Cal Coolidge grew silk.}\\
```

```
\begin{columns}
\column{0.5\textwidth}
\begin{figure}[ht]
\begin{center}
\includegraphics[height=2in]{LarsonGifted.eps}
~\footnote{Apologies to Gary Larson}
\end{center}
\end{figure}
```

```
\column{0.5\textwidth}
\begin{block}<2->{Observation 1}
Simmons Hall is composed of metal and concrete.
\end{block}
\begin{block}<3->{Observation 2}
Simmons Dormitory is composed of brick.
\end{block}
\begin{block}<4->{Conclusion}
Simmons Hall $\not=$ Simmons Dormitory.
\end{block}
\end{columns}
```

# Math

```
\newtheorem{thm}{Easy Theorem}
\newtheorem{pf}{Proof}
\newtheorem{rmk}{Remark}
\begin{thm}<1->
$$x^n+y^n=z^n,$$
has no integer solutions for $n>2$
where $x,\,y,\,z\,\neq\,0$.
\end{thm}
\begin{pf}<3->
The proof is trivial and left as an exercise.
\end{pf}
\begin{rmk}<2->
This problem was first posed in $10,000$ B.C.
\end{rmk}
```

# Tables

```
\begin{table}[bt]
\begin{tabular}{|l|c|c|} \hline
\textbf{Ice Cream Store} & \textbf{Location}
& \textbf{How to Get There} \\ \hline
\uncover<2->{Toscanini’s} & \uncover<2->{Central Square}
& \uncover<2->{Just walk!} \\
\uncover<3->{Herrell’s} & \uncover<3->{Harvard Square}
& \uncover<3->{Red Line} \\
\uncover<4->{J.P. Licks} & \uncover<4->{Davis Square}
& \uncover<4->{Red Line} \\
\uncover<5->{Ben \& Jerry’s} & \uncover<5->{Newbury Street}
& \uncover<5->{Green Line} \\ \hline
\end{tabular}
\end{table}
```

# TOC

- Treat sections just like you would in a paper.
- Use \tableofcontents[section] to keep audience informed of your talk’s general plan.
- Use \AtBeginSection[]{specialframe} to help audience follow the structure of your talk.

```
\section{Intro to Beamer}
\subsection{About Beamer}
\subsection[Basic Structure]{Basic Structure}
\subsection{How to Compile}
\section{Overlaying Concepts}
\subsection{Specifications}
\subsection[Examples]{Examples: Lists, Graphics, Tables}
\section[Sparkle]{Adding that Sparkle}
\subsection{Sections}
\subsection{Themes}
\section*{References}

\AtBeginSection[]
{
\begin{frame}{Table of Contents}
\tableofcontents[currentsection]
\end{frame}
}
```

# Themes

To make your presentation use a shiny theme like ours:

- Find \mode<presentation>{} at the top of your file
- Insert \usetheme{Warsaw} into the {}

Also available within each Presentation Theme:

- Color themes: \usecolortheme{colorthemename} control colors for bullets, background, text, etc.
- Inner themes: \useinnertheme{innerthemename} control main title, environments, figures and tables, footnotes,
etc.
- Outer themes: \useoutertheme{outerthemename} control head-/foot-lines, sidebars, frame titles, etc.
