//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject
{
    _Bool _ascending;
    NSArray *_generators;
}

@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSArray *generators; // @synthesize generators=_generators;
- (unsigned long long)hash;
- (_Bool)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)orderByExpression;
- (id)initWithGenerators:(id)arg1 ascending:(_Bool)arg2;

@end

