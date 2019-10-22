use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();
    
    let mut numbers = vec![];

    for i in input.split_whitespace() {
        numbers.push(i.parse::<i32>().unwrap());
    }

    numbers.sort();

    println!("{}", numbers[1]);
}