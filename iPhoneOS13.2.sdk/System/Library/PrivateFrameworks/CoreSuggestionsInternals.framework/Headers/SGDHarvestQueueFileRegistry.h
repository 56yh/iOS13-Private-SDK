//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SGDHarvestQueueFileRegistry : NSObject
{
    NSString *_dir;
    NSMutableDictionary *_fdForFileId;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)defaultRegistry:(id)arg1;
- (void)flush;
- (void)_flushFileId:(int)arg1;
- (void)prepareToOpenForReading:(int)arg1;
- (int)openForWritingIfPossible:(int)arg1;
- (int)_openForReadingIfPossibleNoCacheLocked:(int)arg1;
- (int)openForReadingIfPossible:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDirectory:(id)arg1;

@end

