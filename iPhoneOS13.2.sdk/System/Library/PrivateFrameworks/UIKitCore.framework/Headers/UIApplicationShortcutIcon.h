//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <NSCopying>
{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;
}

+ (id)iconWithCustomImage:(id)arg1 isTemplate:(_Bool)arg2;
+ (id)iconWithCustomImage:(id)arg1;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithSystemImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // @synthesize sbsShortcutIcon=_sbsShortcutIcon;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;

@end

