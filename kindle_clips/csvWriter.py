import csv
data=[['9827',"this is my line"],['2297',"this is my 2 line"]]

with open ('kindle_csv.csv','w',newline='') as f:
    writer=csv.writer(f)
    for data_list in data:
        writer.writerow(data_list)
  
