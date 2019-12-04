//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLVideoTranscoder : NSObject
{
}

+ (struct NSObject *)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (struct NSObject *)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_198678f7)arg3 endTime:(CDStruct_198678f7)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(id /* block */)arg8;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(id /* block */)arg6;
+ (id)exportPresetsCompatibleWithVideoAtURL:(id)arg1;

@end

