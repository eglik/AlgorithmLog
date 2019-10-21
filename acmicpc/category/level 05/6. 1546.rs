use std::io;

fn main() {
    let mut input = String::new();
    let mut numbers = vec![];

    io::stdin().read_line(&mut input).unwrap();
    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    
    for i in input.split_whitespace() {
        numbers.push(i.parse::<f32>().unwrap());
    }

    numbers.sort_by(|a, b| a.partial_cmp(b).unwrap());
    
    for i in 0..numbers.len() {
        numbers[i] = numbers[i] / numbers.last().unwrap() * 100.;
    }

    println!("{:.5}", numbers.iter().sum::<f32>() / numbers.len() as f32);
}