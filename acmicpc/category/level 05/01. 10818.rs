use std::io;

fn main() {
    let mut input = String::new();
    let mut numbers = vec![];

    io::stdin().read_line(&mut input).unwrap();
    
    input.clear();

    io::stdin().read_line(&mut input).unwrap();

    for i in input.split_whitespace() {
        numbers.push(i.parse::<i32>().unwrap());
    }    

    numbers.sort();

    println!("{} {}", numbers.first().unwrap(), numbers.last().unwrap());
}