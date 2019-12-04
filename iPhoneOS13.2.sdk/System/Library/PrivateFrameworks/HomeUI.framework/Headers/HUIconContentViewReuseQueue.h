//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject
{
    Class _contentViewClass;
    NSMutableArray *_reuseStack;
}

+ (id)globalReuseQueueForContentViewClass:(Class)arg1;
@property(readonly, nonatomic) NSMutableArray *reuseStack; // @synthesize reuseStack=_reuseStack;
@property(readonly, nonatomic) Class contentViewClass; // @synthesize contentViewClass=_contentViewClass;
- (void)reapContentView:(id)arg1;
- (id)dequeueContentView;
- (id)initWithContentViewClass:(Class)arg1;
- (id)init;

@end

