//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <UIKitCore/_UIIdentifierDifferMovePair-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIIdentifierDifferMovePair : NSObject <_UIIdentifierDifferMovePair, NSCopying>
{
    long long _fromIndex;
    long long _toIndex;
}

@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(nonatomic) long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

