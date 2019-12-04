//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUMutableWarningSet : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_warnings;
}

- (_Bool)hasWarningsOfKind:(long long)arg1;
- (id)warningsOfKind:(long long)arg1;
- (id)popAllWarningsIfContainsWarningPassingTest:(id /* block */)arg1;
- (id)popAllWarnings;
- (_Bool)containsWarningPassingTest:(id /* block */)arg1;
- (id)warningsPassingTest:(id /* block */)arg1;
- (void)addWarning:(id)arg1;
- (void)unionSet:(id)arg1;
@property(readonly) unsigned long long count;
- (id)initWithSet:(id)arg1;
- (id)init;

@end

