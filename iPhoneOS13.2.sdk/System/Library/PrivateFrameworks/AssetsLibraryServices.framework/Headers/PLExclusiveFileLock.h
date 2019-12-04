//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLUnlocker-Protocol.h>

@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker>
{
    NSURL *_url;
    int _fd;
}

- (id)lockFailure;
- (id)lockData;
- (void)unlock;
- (_Bool)lockWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool isLocked;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

