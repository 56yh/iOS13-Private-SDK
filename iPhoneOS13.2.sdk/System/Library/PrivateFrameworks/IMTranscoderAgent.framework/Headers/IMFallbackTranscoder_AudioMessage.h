//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMFallbackTranscoder_AudioMessage : NSObject
{
}

- (void)_failWithOSStatusErrorCode:(int)arg1 description:(id)arg2 completion:(id /* block */)arg3;
- (id)_tmpOutputFileURL;
- (void)transcodeOpusFile:(id)arg1 completionBlock:(id /* block */)arg2;

@end

