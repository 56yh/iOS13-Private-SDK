//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject
{
    NSMutableDictionary *_classMap;
    NSMutableDictionary *_typeMap;
    NSMutableDictionary *_dependentMap;
}

- (_Bool)isDependentByTagName:(id)arg1;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (Class)elementClassByTagName:(id)arg1;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
- (id)init;

@end

