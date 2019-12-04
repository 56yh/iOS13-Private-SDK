//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXTrampoline : NSObject
{
    _Bool _warnAboutUnknownSelectors;
    id _caller;
    Class _targetClass;
}

+ (id)methodNotFoundSentinal;
+ (void)methodDoesNotExistSentinal;
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;
@property(nonatomic) _Bool warnAboutUnknownSelectors; // @synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors;
@property(nonatomic) __weak Class targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) __weak id caller; // @synthesize caller=_caller;
- (CDUnknownFunctionPointerType)_findIMPForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)callerIsClass;
- (id)description;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;

@end

