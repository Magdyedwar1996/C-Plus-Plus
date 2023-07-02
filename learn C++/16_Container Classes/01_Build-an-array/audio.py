import youtube_dl

def download_youtube_audio(url, output_dir):
    ydl_opts = {
        'format': 'bestaudio/best',
        'postprocessors': [{
            'key': 'FFmpegExtractAudio',
            'preferredcodec': 'mp3',
            'preferredquality': '192',
        }],
        'outtmpl': output_dir + '/%(title)s.%(ext)s',
        'noplaylist': True,
    }

    with youtube_dl.YoutubeDL(ydl_opts) as ydl:
        ydl.download([url])

if __name__ == '__main__':
    url = input("Enter the YouTube video URL: ")
    output_dir = input("Enter the output directory: ")
    download_youtube_audio(url, output_dir)
    print("Download completed!")
