console.log("We Are in");

let Input = document.querySelector('.Input')
let Button = document.querySelector('.Button');
let Result = document.querySelector('.res')

Button.addEventListener('click', () => {
    BSearch(Input.value)
})

function BSearch(KEY) {

    // const KEY = 36;
    let ARRAY = [0, 2, 4, 5, 9, 22, 36, 45];

    let Low = ARRAY[0];
    let High = ARRAY.length;
    let MID = ((Low + High) - Low) / 2; // MID = 9


    if (Low === High) {
        // No key Fouund
        console.log('No more Search Space');
        console.log(MID);
    } else {
        if (KEY == MID) {
            // The Key is MID
            console.log('Key found at ');
            console.log(MID);
        }

        if (KEY < MID) {
            // Make The Low To MID + 1
            console.log('Key Found at Positive');
            Low = MID - 1;
            // let MID = ((Low + High) - Low) / 2; // MID = 9
            console.log(MID);

        } else if (KEY > MID) {
            // Make The Low To MID + 1
            console.log('Key Found at Nag');
            High = MID + 1;
            // let MID = ((Low + High) - Low) / 2; // MID = 9
            console.log(MID);

        } else {
            // Trmt Programm
            console.log('Key Not Found');
            console.log(MID);
        }
    }
}