import speedtest 
test=speedtest.Speedtest()
down=test.download()
upload=test.upload()
print(f"download : {down} upload {upload}")