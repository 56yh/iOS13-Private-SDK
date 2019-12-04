//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SUScriptObject, WebScriptObject;

@interface SUScriptFunction : NSObject
{
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

- (id)_copyAdjustedArgumentsForArguments:(id)arg1;
- (void)unlock;
@property __weak id thisObject;
@property(retain) WebScriptObject *scriptObject;
- (void)lock;
- (id)callSynchronouslyWithArguments:(id)arg1;
- (_Bool)callWithArguments:(id)arg1 completionBlock:(id /* block */)arg2;
- (_Bool)callWithArguments:(id)arg1;
- (void)dealloc;
- (id)initWithScriptObject:(id)arg1;
- (id)init;

@end

