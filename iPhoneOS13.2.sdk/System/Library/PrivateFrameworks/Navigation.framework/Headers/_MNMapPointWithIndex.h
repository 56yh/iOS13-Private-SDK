//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointWithIndex : NSObject
{
    _Bool _isStartOfSegment;
    _Bool _isPolylineA;
    _Bool _isFlipped;
    unsigned long long _index;
    Matrix_2bdd42a3 _point;
    LineSegment_ede69d4d _segment;
}

@property(nonatomic) LineSegment_ede69d4d segment; // @synthesize segment=_segment;
@property(nonatomic) _Bool isFlipped; // @synthesize isFlipped=_isFlipped;
@property(nonatomic) _Bool isPolylineA; // @synthesize isPolylineA=_isPolylineA;
@property(nonatomic) _Bool isStartOfSegment; // @synthesize isStartOfSegment=_isStartOfSegment;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) Matrix_2bdd42a3 point; // @synthesize point=_point;
- (id).cxx_construct;

@end

