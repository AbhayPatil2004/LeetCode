var asteroidCollision = function(asteroids) {
    
    let result = [];

    for (let i = 0; i < asteroids.length; i++) {

        if (asteroids[i] > 0) {
            result.push(asteroids[i]);
        } 
        else {
            while (
                result.length > 0 &&
                result[result.length - 1] > 0 &&
                result[result.length - 1] < Math.abs(asteroids[i])
            ) {
                result.pop();
            }

            if (result.length === 0 || result[result.length - 1] < 0) {
                result.push(asteroids[i]);
            } 
            else if (result[result.length - 1] === Math.abs(asteroids[i])) {
                result.pop();
            }
        }
    }

    return result;
};