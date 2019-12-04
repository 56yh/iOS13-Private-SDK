//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface CKDFileWatcher : NSObject
{
    int _fd;
    NSString *_path;
    NSObject<OS_dispatch_source> *_source;
}

+ (id)queue;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

