//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCH3DGridlineResource : TSCH3DResource
{
    TSCH3DAxisGridEnumerator *mAxis;
}

+ (id)resourceWithAxisEnumerator:(id)arg1;
- (id)get;
@property(readonly, nonatomic) float opacity;
@property(readonly, nonatomic) TSDStroke *stroke;
@property(readonly, nonatomic) _Bool enabled;
- (void)dealloc;
- (id)initWithAxisEnumerator:(id)arg1;

@end

