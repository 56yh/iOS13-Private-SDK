//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VUIDownloadButtonProperties : NSObject
{
    _Bool _hasBorder;
    _Bool _enabled;
    _Bool _hasImage;
    _Bool _hasTitle;
    _Bool _indeterminate;
    UIImage *_image;
    NSString *_title;
    double _progress;
    unsigned long long _downloadState;
}

@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isInderminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;

@end

