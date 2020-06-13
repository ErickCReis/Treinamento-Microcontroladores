## 5. Sistema de Clock e Modos de Repouso

#### 5.1. Distribuição de Clock

<div align="center">
    <img src="../Figuras/clock.png" />
</div>

**5.1.1. Registrador**

<div align="center">
    <img src="../Figuras/registradores/clkpr.png" />
</div>

#### 5.2. Modos de baixo consumo

<div align="center">
    <img src="../Figuras/baixo-consumo.png" />
</div>

**5.2.1. Consumo**

IDLE: **15 mA**
ADC: **6.5 mA**
PWR_DOWN : **0.36 mA**
PWR_SAVE: **1.62 mA**
STANDBY : **0.84 mA**
EXT_STANDBY: **1.62 mA**

**5.2.2. Uso**

```set_sleep_mode (SLEEP_MODE_xxx);```



