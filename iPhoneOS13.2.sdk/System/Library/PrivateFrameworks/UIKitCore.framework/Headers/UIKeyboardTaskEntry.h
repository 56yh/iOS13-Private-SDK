//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <NSCopying>
{
    id /* block */ __task;
    NSArray *__creationStack;
}

@property(readonly, retain, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;
- (void)execute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id /* block */)arg1;

@end

