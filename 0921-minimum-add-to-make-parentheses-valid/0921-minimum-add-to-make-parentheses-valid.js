/**
 * @param {string} s
 * @return {number}
 */
var minAddToMakeValid = function(s) {
    let c = 0 , mn = 0;
    for(let  k = 0 ; k < s.length ; k++){
        if(s[k] == '('){
            c++;
        }
        else{
            if(c > 0)   c--;
            else    mn++;
        }
    }
    return c + mn;
};