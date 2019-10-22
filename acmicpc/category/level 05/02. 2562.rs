use std::io;

fn main() {
    let mut input = String::new();
    let mut numbers = vec![];
    

    for _ in 0..9 {
        io::stdin().read_line(&mut input).unwrap();
        numbers.push(input.trim().parse::<i32>().unwrap());
        input.clear();
    }

    let mut max_number = 0;
    let mut index = 0;

    for i in 0..numbers.len() {
        if numbers[i] > max_number
        {
            max_number = numbers[i];
            index = i;
        }
    }
    println!("{}", max_number);
    println!("{}", index + 1);
}