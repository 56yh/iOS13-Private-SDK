//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCDispatchAfterHandler : NSObject
{
    NSMutableDictionary *_identifierBlockMap;
}

+ (id)appLifeCycleHandler;
@property(retain, nonatomic) NSMutableDictionary *identifierBlockMap; // @synthesize identifierBlockMap=_identifierBlockMap;
- (void)cancelAll;
- (void)cancelBlocksWithStringIdentifier:(id)arg1;
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(id /* block */)arg3;
- (id)identifierForStringIdentifier:(id)arg1;
- (id)init;

@end

