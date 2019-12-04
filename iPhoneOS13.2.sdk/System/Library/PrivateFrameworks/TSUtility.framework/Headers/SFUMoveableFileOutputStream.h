//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUOutputStream-Protocol.h>

@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream>
{
    int mFd;
    NSString *mPath;
}

- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (void)flush;
- (void)truncateToLength:(long long)arg1;
- (_Bool)moveToPath:(id)arg1;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (long long)offset;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithTemporaryFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

