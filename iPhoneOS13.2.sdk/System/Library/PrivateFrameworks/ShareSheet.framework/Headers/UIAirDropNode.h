//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject <NSSecureCoding>
{
    _Bool _wantsTwoLines;
    _Bool _hasSquareImage;
    _Bool _disabled;
    _Bool _restricted;
    NSNumber *_imageSlot;
    NSNumber *_mainLabelSlot;
    NSNumber *_topLabelSlot;
    NSNumber *_bottomLabelSlot;
    NSNumber *_transportSlot;
    NSUUID *_nodeIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool hasSquareImage; // @synthesize hasSquareImage=_hasSquareImage;
@property(nonatomic) _Bool wantsTwoLines; // @synthesize wantsTwoLines=_wantsTwoLines;
@property(retain) NSUUID *nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
@property(retain) NSNumber *transportSlot; // @synthesize transportSlot=_transportSlot;
@property(retain) NSNumber *bottomLabelSlot; // @synthesize bottomLabelSlot=_bottomLabelSlot;
@property(retain) NSNumber *topLabelSlot; // @synthesize topLabelSlot=_topLabelSlot;
@property(retain) NSNumber *mainLabelSlot; // @synthesize mainLabelSlot=_mainLabelSlot;
@property(retain) NSNumber *imageSlot; // @synthesize imageSlot=_imageSlot;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

