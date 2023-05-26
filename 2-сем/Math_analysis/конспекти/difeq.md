---
pdfengine: pdflatex
header-includes:
- \usepackage{amsmath}
- \usepackage{mathtools}
- \sloppy
---

\twocolumn

# До кожної гайки --- свій ключ

## Дифрня з розділеними змінними

$$
	M(x) dx + N(y) dy = 0
$$
$$
	M(x) dx = -N(y)dy \implies
	\int M(x)\, dx=\int N(y)\,dy
$$

### Приклад

\begin{align}
	e^x dx +ydy = 0 \\
	e^x dx = -ydy \\
	\int e^x\,dx = -\int y\,dy \\
	e^x+C_1 = -\frac{y^2}{2}+C_2 \\
	\frac{y^2}{2}+e^x+C=0
\end{align}

$y=\phi(x,e)$
: явно

$F(x,y,c) = 0$
: загальний інтеграл рня (неявний вигляд)

## Рня зі змінними, які розділяються

$$
	M(x)N(y)dx+P(x)Q(y)dy=0
$$
$$
	\frac{M(x)}{P(x)}dx = -\frac{Q(y)}{N(y)}dy
$$
далі інтегруємо й розв'язуєм

### Приклад

\begin{align}
	(4+e^x)y dy=e^x dx \\
	ydy=\frac{e^x}{x+e^x}\,dx \implies
	\int ydy=\int \frac{e^x}{x+e^x}\,dx \\
	\frac{y^2}{2} = \int \frac{d(e^x+4)}{4+e^x}
	%% \frac{y^2}{2}
	= \ln |4+e^x| + C \\
	y^2-2\ln(4+e^x)+C=0
\end{align}
(тут модуль можна викинути)

## Дифрня з однорідною правою частиною (функцією)

$$
	y'=f(x,y)
$$
f(x,y) однорідна степеню $k$, якщо
\begin{equation}
	f(tx,ty)=t^k f(x,y)
\end{equation}
$$
	\frac{xy}{x^2+y^2}
	\implies \frac{txty}{t^2x^2+t^2y^2}
	= \frac{xy}{x^2+y^2}
	= t^0 f(x,y)
$$

### Розв'язок задачі Коші

$$
\begin{cases}
	(2x-3y)dx+xdy = 0 \\
	y(1)=-1
\end{cases}
$$
\begin{align}
	xdy=(3y-2x)dx \\
	\frac{dy}{dx}=\frac{3y-2x}{x}
\end{align}

\begin{fbox}
{
	ЗАМІНА $y = u\cdot x$
}
\end{fbox}

\begin{align}
	y'=u'x+u \\
	u'x+u = \frac{3ux-2x}{x} \\
	u'x+u = 3u-2 \implies
	u'x=2u-2 \\
	\frac{du}{dx}-x=2u-2 \implies
	\frac{du}{2u-2}=\frac{dx}{x}
\end{align}

$$
	\frac{1}{2}\int \frac{d(u-1)}{u-1} = \int \frac{dx}{x} \implies
	\frac{1}{2} \ln |u-1| = \ln |x| + \ln C
$$
$$
	\ln|u-1|=\ln(cx)^2 \implies u = 1+Cx^2 \implies
	\fbox{
	$y = x+Cx^3$
	}
$$

$$
	-1 = 1+C \implies C = -2 \implies y = x-2x^3
$$

## Лінійні дифрня

$$
	\begin{aligned}
	y'+P(x)y=Q(x) & \text{~~лінійне неоднорідне} \\
	y'+P(x)y=0 & \text{~~лінійне однорідне}
	\end{aligned}
$$

P(x), Q(x) задані

Звичайні дифрівняння дубовика юрика мяу а не квас пити

\fbox{
ЗАМІНА: $y=u\cdot v$
}

$$
	y'+2y=x
$$

\begin{align}
	y'=u'v+uv' \\
	\fbox{
	$\underbracket{u'v+\overbracket{uv'+2uv}}=x$
	}\\
	uv'+2uv=0 \implies
	u=0 \text{~або~} v'+2v=0 \\
	\text{u не може бути 0 у цьому!! (0=x?)} \\
	\frac{dv}{dx}=-2v
	\implies
	\frac{dv}{v}=-2dx \\
	\int \frac{dv}{v}=-2\int dx \\
	\ln |v|=-2x
\end{align}
	треба тільки одну v, тому без константи
\begin{align}
	v = e^{-2x} \\
	u' * e^{-2x}=x \\
	\frac{du}{dx} = xe^{2x} \implies
	du = xe^{2x} dx \\
	\int du = \int xe^{2x} dx
	u = \frac{1}{4} \int (2x)e^{2x}d(2x)
\end{align}
\begin{center}
	\fbox{ $2x=t$ }
\end{center}
\begin{align}
	\int t e^t dt = \int td e^t = te^t-e^t \\
	4u = e^{2x}(2x-1)+C \\
	u = \frac{1}{4}e^{2x}(2x-1)+C \\
	y = \left( \frac{1}{4}e^{2x}(2x-1)+C \right)e^{-2x} \\
	y = \frac{1}{4}(2x-1)+Ce^{-2x}
\end{align}

Повірте, що Загальний розв'язок --- сума загального розв'язку однорідного рня
+ частинний розв'язок неоднорідного

$$
y(x) = \underbrace{Ce^{-2x}}_{\text{загальний р однор}}+\underbrace{\frac{1}{4}(2x-1)}_{\text{частинний неодн}}
$$

$$
	-2Ce^{-2x}+2Ce^{-2x} = 0?
$$

тепер підстав ту фю в $y'+2y=x$

## Рня Бернуллі

$$
	y'+p(x)y=Q(x)y^n
$$

Звичайне лінійне, якщо n 0, але впринципі такою самою заміною розв'язується

> шо тільки ті токсікомани не робили

## Рня в повних диференціалах

$$
	M(x,y)dx+N(x,y)dy=0
$$
$$
\frac{\partial M}{\partial y} = \frac{\partial N}{\partial x}
$$
тоді в повних диференціалах

$$
du(x,y)=\underbrace{ \frac{du}{dx}}_M dx +\underbrace{ \frac{du}{dy}}_N dy
$$

$$
du(x,y)=M(x,y)dx+N(x,y)dy=0
$$
$$
\fbox{
$u(x,y)=C$
}
$$

---

\begin{align}
	2xydx+(x^2-y^2)dy=0 \\
	2x \overset{?}= 2x
\end{align}
**вчепимося до $2xydx$**
\begin{align}
	u(x,y) = \int 2xydx+\phi(y)
	= yx^2+\phi(y) \\
	\frac{\partial u}{\partial y}=x^2+\phi'(y) = x^2-y^2 \\
	\phi'(y) = -y^2 \\
	\phi(y) = -\int y^2 dy \implies
	\phi(y) = -\frac{y^3}{3}+C \\
	u(x,y) = yx^2 -\frac{y^3}{3}+C \\
	yx^2-\frac{y^3}{3}+C=0 \\
	\text{беремо частинні похідні, виходить~} 2xy | x^2-y^2
\end{align}

## Рня вищого порядку

$$
y^{(n)}=f(x)
$$
$$
dy^{(n-1)}=f(x)dx
$$
$$
y^{(n-1)}=\int f(x)dx
$$
\begin{align}
	y'''=x^2+e^x \\
	y''=x^3/3+e^x+C_1 \\
	y'=x^4/12+e^x+C_1x+C_2 \\
	y=x^5/60+e^x+C_1x^2/2+C_2x +C_3
\end{align}

$$
	F(x,y^{(k)},y^{(k+1)},y^{(n)}) = 0 \implies
	y^{(k)} = z
$$

### приклад

$$
xy'''+2y''=0 \\
$$
\begin{align}
	y''=z(x) \\
	xz'+2z=0 \implies
	x\frac{dz}{dx}=-2z \\
	\frac{dz}{z}=-2\frac{dx}{x} \implies
	\int \frac{dz}{z}=-2\int\frac{dx}{x} \\
	\ln|z|=-2\ln|x|+\ln C \implies
	\ln|z|=\ln|Cx^{-2}| \\
	z=\frac{C}{x^2} = y'' \\
	y' = \int\frac{C}{x^2}dx=-C\frac{1}{x}+C_1 \\
	y=-C\ln|x|+C_1 x+C_2
\end{align}

## Рівняння без $x$

$$
y'e^y=2y''
$$
$$
y'=p \implies
y''=\frac{d}{dx}(y')
=\frac{d}{dx}(p)
=\frac{d}{dy}(p)\frac{dy}{dx}=p'*p
$$
$$
	y'e^y=2y'' \implies pe^y=2pp'
	\implies p(e^y-2p')=0
$$
\begin{align}
\left[
	\begin{aligned}
		&p = 0 \implies y'=0 \implies y=C \\
		&e^y=2p' \implies \frac{dp}{dy}=\frac{1}{2}e^y
	\end{aligned}
\right. \\
\int dp = \int \frac{1}{2}e^y\,dy \\
p=\frac{1}{2}e^y+C=y' \\
\frac{2dy}{dx}=e^y+(2)C
\implies
\int \frac{2dy}{e^y+C}=\int dx
\end{align}

$$
	\int \frac{2dy}{\underbrace{e^y}_t+C}=
	2\int \frac{dt}{t(t+C)}=
	2\int \frac{A}{t}+\frac{B}{t+c}\,dt
$$
\fbox{
$1=A(t+C)+Bt \implies 1=-BC, 1=AC$
}
$$
	2\int\frac{1}{Ct}-2\int\frac{1}{C(C+t)}
	= \frac{\ln|e^y|-\ln|e^y+C|}{C}
$$

# Лінійні дифрівняння зі сталими коефами

> Тихо! Мертві бджоли!

$$
	y^{(n)}
	+P_1(x)y^{(n-1)}
	+P_2(x)y^{(n-2)}
	+\cdots
	+P_n(x)y
	=Q(x)
$$
Загально не розв'язується, але:
$$
	y^{(n)}
	+a_1y^{(n-1)}
	+a_2y^{(n-2)}
	+\cdots
	+a_ny
	=Q(x)
$$
$$
	y''+p_1(x)y'+p_2(x)y=Q(x)
$$
