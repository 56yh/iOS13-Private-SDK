//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, UIImage;

@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding>
{
    _Bool _didSetShowsLargeContentViewer;
    _Bool _showsLargeContentViewer;
    _Bool _didSetLargeContentTitle;
    _Bool _didSetLargeContentImage;
    _Bool _didSetScalesLargeContentImage;
    _Bool _scalesLargeContentImage;
    _Bool _didSetLargeContentImageInsets;
    NSString *_largeContentTitle;
    UIImage *_largeContentImage;
    struct UIEdgeInsets _largeContentImageInsets;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct UIEdgeInsets largeContentImageInsets; // @synthesize largeContentImageInsets=_largeContentImageInsets;
@property(nonatomic) _Bool didSetLargeContentImageInsets; // @synthesize didSetLargeContentImageInsets=_didSetLargeContentImageInsets;
@property(nonatomic) _Bool scalesLargeContentImage; // @synthesize scalesLargeContentImage=_scalesLargeContentImage;
@property(nonatomic) _Bool didSetScalesLargeContentImage; // @synthesize didSetScalesLargeContentImage=_didSetScalesLargeContentImage;
@property(retain, nonatomic) UIImage *largeContentImage; // @synthesize largeContentImage=_largeContentImage;
@property(nonatomic) _Bool didSetLargeContentImage; // @synthesize didSetLargeContentImage=_didSetLargeContentImage;
@property(copy, nonatomic) NSString *largeContentTitle; // @synthesize largeContentTitle=_largeContentTitle;
@property(nonatomic) _Bool didSetLargeContentTitle; // @synthesize didSetLargeContentTitle=_didSetLargeContentTitle;
@property(nonatomic) _Bool showsLargeContentViewer; // @synthesize showsLargeContentViewer=_showsLargeContentViewer;
@property(nonatomic) _Bool didSetShowsLargeContentViewer; // @synthesize didSetShowsLargeContentViewer=_didSetShowsLargeContentViewer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

