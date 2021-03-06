//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INReservation.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INRentalCar;

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding>
{
    INRentalCar *_rentalCar;
    INDateComponentsRange *_rentalDuration;
    CLPlacemark *_pickupLocation;
    CLPlacemark *_dropOffLocation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) CLPlacemark *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(readonly, copy, nonatomic) CLPlacemark *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(readonly, copy, nonatomic) INDateComponentsRange *rentalDuration; // @synthesize rentalDuration=_rentalDuration;
@property(readonly, copy, nonatomic) INRentalCar *rentalCar; // @synthesize rentalCar=_rentalCar;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10;

@end

