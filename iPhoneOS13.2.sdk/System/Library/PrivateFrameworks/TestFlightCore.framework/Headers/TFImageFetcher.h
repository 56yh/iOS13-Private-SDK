//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TFImageFetcher : NSObject
{
    double _displayedScreenScale;
}

@property(readonly, nonatomic) double displayedScreenScale; // @synthesize displayedScreenScale=_displayedScreenScale;
- (id)_urlStringForIconArtwork:(id)arg1 ofSize:(struct CGSize)arg2 fileFormat:(id)arg3;
- (void)fetchIconArtwork:(id)arg1 ofSize:(struct CGSize)arg2 intoView:(id)arg3 animated:(_Bool)arg4;
- (id)init;

@end

