//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject
{
    PXProgrammaticNavigationDestination *_destination;
    unsigned long long _options;
    id /* block */ _completionHandler;
}

@property(readonly, copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *destination; // @synthesize destination=_destination;
- (id)description;
- (id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end

