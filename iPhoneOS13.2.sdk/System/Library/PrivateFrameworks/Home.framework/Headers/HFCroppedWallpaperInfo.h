//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface HFCroppedWallpaperInfo : NSObject <NSCopying>
{
    long long _source;
    double _scale;
    struct CGPoint _center;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (id)dictionaryRepresentation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(long long)arg1 center:(struct CGPoint)arg2 scale:(double)arg3;

@end

