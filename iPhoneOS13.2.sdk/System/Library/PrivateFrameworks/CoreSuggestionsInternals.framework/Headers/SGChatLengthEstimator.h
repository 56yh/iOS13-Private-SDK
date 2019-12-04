//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface SGChatLengthEstimator : NSObject
{
    int _fd;
    NSMutableData *_backingData;
    unsigned short *_countPtr;
    char *_sketch;
    struct _opaque_pthread_mutex_t _lock;
    NSString *_path;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(readonly) NSString *path; // @synthesize path=_path;
- (unsigned long long)estimateMessagesInChat:(id)arg1;
- (void)recordMessageInChat:(id)arg1;
@property(readonly) unsigned long long count;
- (void)dealloc;
- (id)init;
- (id)initInMemory;
- (id)initWithPath:(id)arg1;

@end

