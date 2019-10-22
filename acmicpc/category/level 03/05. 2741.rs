use std::io;
use std::io::Write;

fn main() {
    let mut input = String::new();
    let mut write_buffer = io::BufWriter::new(io::stdout());

    io::stdin().read_line(&mut input).unwrap();

    let count = input.trim().parse::<i32>().unwrap();
    
    for i in 1..count+1 {
        writeln!(write_buffer, "{}", i);
    }
}