//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSError, TVImage;

@protocol VUIImageLoadingOperation 
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, nonatomic) unsigned long long scalingResult;
@property(readonly, nonatomic) TVImage *image;
@property(readonly, nonatomic) _Bool cropToFit;
@property(readonly, nonatomic) struct CGSize scaleToSize;
@end

