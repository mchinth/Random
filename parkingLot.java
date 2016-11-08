parking lot amazon interview question 
	functions - isAvailable -> find slot 
		 isFull
	2 Types of parking handicapped , compact ,regular 

class Vehicle{
	int vehicle_no;
	int status;
	ParkingLot obj;
	Vehicle(int vehicle_no , int status){
		this.vehicle_no = vehicle_no;
		this.status = status;
	}
	park(){
		obj = ParkingLot.getInstance();
		switch(status){
			case 0:
				if(handicappedSlots.size() > 0)	{
					Slot s =obj.handicappedSlots.remove(0);
					s.add_Vehicle(vehicle_no);
					occupiedSlots.push(vehicle_no, s);
				}
			case 1:
			case 2:
		}
	}
	unpark(){
		switch(status){
			case 0:
				Slot s = obj.OccupiedSlots.remove(vehicle_no);
				//obj.OccupiedSlots.remove();
				s.remove_Vehicle(vehicle_no);
				handicappedSlots.add(s);
		}
	}
}
class ParkingLot{
	Static int instance;
	private static ParkingLot p;
	int Total_slots,h_slots, c_slots, r_slots;
	Map<Integer, Slot> occupiedSlots;
	ArrayList<Slot> handicappedSlots ; //0
	ArrayList<Slot> valetSlots ;//1
	ArrayList<Slot> regularSlots;//2
	ParkingLot(){
		h_slots = 10;
		c_slots = 20;
		r_slots = 30;
		occupiedSlots = new HashMap<Integer, Slot>();
		handicappedSlots = new ArrayList<Slot>();
		valetSlots = new ArrayList<Slot>();
		regularSlots = new ArrayList<Slot>();
		for(int i=0;i< h_slots ;i++){
			handicappedSlots.add(new Slot(i, 0));
		}
		for(int i=0;i<c_slots;i++){
			compactSlots.add(new Slot(i,1));
		}
		for(int i=0;i< r_slots;i++){
			regularSlots.add(new Slot(i,2));
		}
		
	}
	public static ParkingLot getInstance(){
		if(instance ==0)
			p = new ParkingLot();
			return p;
		else
			return p;
	}
}

class Slot{
	int slotid;
	int type;
	int OccupiedbyVehicle;
	Slot(int id , int type){
		this.slotid = id;// random number 
		this.type = type;
	}
	
	add_Vehicle( int num ){
		this.OccupiedbyVehicle = num;
	}
	remove_Vehicle(){
		this.OccupiedbyVehicle = 0;
	}

	 
}



Here is a quick start to get the gears turning...

ParkingLot is a class.

ParkingSpace is a class.

ParkingSpace has an Entrance.

Entrance has a location or more specifically, distance from Entrance.

ParkingLotSign is a class.

ParkingLot has a ParkingLotSign.

ParkingLot has a finite number of ParkingSpaces.

HandicappedParkingSpace is a subclass of ParkingSpace.

RegularParkingSpace is a subclass of ParkingSpace.

CompactParkingSpace is a subclass of ParkingSpace.

ParkingLot keeps array of ParkingSpaces, and a separate array of vacant ParkingSpaces in order of distance from its Entrance.

ParkingLotSign can be told to display "full", or "empty", or "blank/normal/partially occupied" by calling .Full(), .Empty() or .Normal()

Parker is a class.

Parker can Park().

Parker can Unpark().

Valet is a subclass of Parker that can call ParkingLot.FindVacantSpaceNearestEntrance(), which returns a ParkingSpace.

Parker has a ParkingSpace.

Parker can call ParkingSpace.Take() and ParkingSpace.Vacate().

Parker calls Entrance.Entering() and Entrance.Exiting() and ParkingSpace notifies ParkingLot when it is taken or vacated so that ParkingLot can determine if it is full or not. If it is newly full or newly empty or newly not full or empty, it should change the ParkingLotSign.Full() or ParkingLotSign.Empty() or ParkingLotSign.Normal().

HandicappedParker could be a subclass of Parker and CompactParker a subclass of Parker and RegularParker a subclass of Parker. (might be overkill, actually.)

Class ParkingLot{
	int num_parkingSpcaes ;
	parkingSpace[] list;
	ArrayList<parkingSpace> vacant_list;
	parkingLotSign sign;
	ParkingLot(){
		num_parkingSpaces = 10;
		list = new parkingSpace[10];
		vacant_list = new ArrayList<parkingSpaces>();
	}
	
}
class parkingSpace{
		int distace_from_entrance;
		parkingSpace(int distance){
			this.distace_from_entrance = distance;
		}
		//Entrance();
		Take(){
			vacant_list.removeFirst();
		}
		Vacate()
	}
	class handicapped extends parkingSpace{
	}
	class regular extends parkingSpace{
	}
	class compact extends parkingSpace{
}

class ParkingLotSign{
	String sign ;
	ParkingLotSign(){
		sign ="empty";
	}
	setLotSign(){
	}
	boolean full(){
		return vacant_list.size() > 0 ? 0 : 1  
	}
	boolean empty(){
		return vacant_list.size() == list.size() ? 1 :0
	}
	parkingSpace normal(){
		return vacant_list[0];
	}
}

Class parker{
	Park()
	Unpark()
	
}
public class Test{
	public static void main(String args[]){
		
	}
}