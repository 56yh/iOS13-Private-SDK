//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait
{
    unsigned long long _value;
}

@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)debugDescription;
- (id)niceDescription;
- (_Bool)isActive;
- (id)initWithPartOfDay:(unsigned long long)arg1;

@end

