//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

@class JSManagedValue;

@interface IKJSWeakMap : IKJSObject
{
    JSManagedValue *_managedWeakMap;
}

@property(readonly, nonatomic) JSManagedValue *managedWeakMap; // @synthesize managedWeakMap=_managedWeakMap;
- (id)_jsWeakMap;
- (const struct OpaqueJSValue *)valueRefForWeakKeyRef:(struct OpaqueJSValue *)arg1;
- (id)valueForWeakKey:(id)arg1;
- (void)setValue:(id)arg1 forWeakKey:(id)arg2;
- (id)initWithAppContext:(id)arg1;

@end

