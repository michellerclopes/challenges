

```js

function FirstFactorial(num) {
   if (num==1) {
        num = 1;
    }
    else if (num=>1) {
        num = (num*FirstFactorial(num-1));    
    }
  return num;      
}

```