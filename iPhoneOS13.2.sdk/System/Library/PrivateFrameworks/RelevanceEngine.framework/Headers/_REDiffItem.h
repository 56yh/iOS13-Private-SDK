//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _REDiffItem : NSObject
{
    id _object;
    unsigned long long _index;
    id /* block */ _comparator;
    id /* block */ _hashGenerator;
}

+ (id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(id /* block */)arg3 hashGenerator:(id /* block */)arg4;
@property(readonly, nonatomic) id /* block */ hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(readonly, nonatomic) id /* block */ comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

