//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeRep.h>

@class TSDPathSource;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineRep : TSDShapeRep
{
    TSDPathSource *mLastPathSource;
}

- (_Bool)shouldSetPathSourceWhenChangingInfoGeometry;
- (void)updateFromLayout;
- (id)connectionLineLayout;

@end

