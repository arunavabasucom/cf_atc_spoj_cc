## Modular Arithmetic Formulas
1. $\ (a + b) \bmod m = ((a \bmod m) + (b \bmod m)) \bmod m$
2. $\ (a - b) \bmod m = ((a \bmod m) - (b \bmod m) + m) \bmod m$
3. $\ (a \cdot b) \bmod m = ((a \bmod m) \cdot (b \bmod m)) \bmod m$
4. $\ \frac{a}{b} \bmod m = a \cdot b^{-1} \bmod m$

Generally $10^9+7$ is used for the mod calculation 
1. $10^9+7$ it is very close to a $\textbf{INT}$ so the is not going to overflow . we can store in $\bold{INT}$ 
2. **MMI** $\colon 1\to M$ prime numbers


```math
0 \to 0 \\
1 \to 1 \\
2 \to 10 \\
3 \to 11 \\
4 \to 100 \\
5 \to 101 \\
\vdots \\
7 \to 111
```

if we can take a look every **odd** number's last bit $1$ and even number has last bit $0$

```math
\begin{array}{|c|c|c|c|}
\hline
A & B & \text{AND}(\And) & \text{OR}(|) & \text{XOR} \\
\hline
0 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 1 & 1 \\
1 & 0 & 0 & 1 & 1 \\
1 & 1 & 1 & 1 & 0 \\
\hline
\end{array} \\

\text{
    1. left shift << 
}\\
\text{    
    1. right shift >>
}
```
