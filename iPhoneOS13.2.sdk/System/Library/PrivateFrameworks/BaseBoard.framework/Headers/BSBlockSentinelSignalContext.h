//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSBlockSentinelSignalContext-Protocol.h>

@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>
{
    _Bool _complete;
    _Bool _failed;
    id _context;
}

+ (id)failureContext;
+ (id)context;
@property(nonatomic, getter=isFailed) _Bool failed; // @synthesize failed=_failed;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) __weak id context; // @synthesize context=_context;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

