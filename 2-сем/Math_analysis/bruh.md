
\usepackage{ifthen} % можна порівняти значення команди
\ifthenelse{\equal{\Type}{\RGR}}
	{\newcommand{\result}{DUPA}} % True
	{\newcommand{\result}{False}} % False

% https://tex.stackexchange.com/questions/15894/evaluation-of-differentiation-and-integration
% https://tex.stackexchange.com/questions/479930/comment-box-for-substitution-method-of-integrals

% \begin{gather*}
%     \iint_V \mu(u,v) \,du\,dv
% \\
%     \iiint_V \mu(u,v,w) \,du\,dv\,dw
% \\
%     \iiiint_V \mu(t,u,v,w) \,dt\,du\,dv\,dw
% \\
%     \idotsint_V \mu(u_1,\dots,u_k) \,du_1 \dots du_k
% \end{gather*}

%\usepackage{polynom}

%\polylongdiv[vars=x,style=D]{3x^2-1}{3x+11}

%\usepackage{titlesec}
%\titleformat{\section}
%	%{\normalfont\fontsize{14}{17.5}\bfseries}{\thesection}{1em}{}
%	{\normalsize\bfseries}{Завдання \thesection.}{1em}{}
%%\titlelabel{\thetitle.\quad}
