use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();
    
    let mut iter = input.split_whitespace();

    let mut hours = iter.next().unwrap().parse::<i32>().unwrap();
    let mut minutes = iter.next().unwrap().parse::<i32>().unwrap();

    minutes -= 45;

    if minutes < 0
    {
        minutes += 60;
        hours -= 1;
    }

    if hours < 0
    {
        hours += 24;
    }

    println!("{} {}", hours, minutes);
}